#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 연락처 정보를 저장할 구조체 정의
typedef struct Contact {
    char name[50];
    char phone[20];
    char email[50];
    char affiliation[50];
    char position[50];
    struct Contact* next;
} Contact;

// 연락처 관리 함수 선언
void addContact(Contact** head);
void deleteContact(Contact** head);
void modifyContact(Contact* head);
void searchContact(Contact* head);
void displayContacts(Contact* head, int option);
void freeContacts(Contact* head);

int main() {
    Contact* head = NULL;  // 연락처 리스트의 헤드 포인터

    int menu;

    do {
        printf("Select menu [(1) 연락처 추가 (2) 연락처 삭제 (3) 연락처 수정 (4) 검색 (5) 전체 연락처 출력 (6) 종료] : ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                addContact(&head);
                break;
            case 2:
                deleteContact(&head);
                break;
            case 3:
                modifyContact(head);
                break;
            case 4:
                searchContact(head);
                break;
            case 5:
                displayContacts(head, 0); // 0은 출력 옵션을 나타냄
                break;
            case 6:
                freeContacts(head);
                printf("프로그램을 종료합니다.\n");
                break;
            default:
                printf("잘못된 옵션입니다.\n");
        }
    } while (menu != 6);

    return 0;
}

// 새로운 연락처 추가 함수
void addContact(Contact** head) {
    Contact* newContact = (Contact*)malloc(sizeof(Contact));
    if (newContact == NULL) {
        printf("메모리 할당 오류\n");
        exit(EXIT_FAILURE);
    }

    printf("이름 >> ");
    scanf("%s", newContact->name);
    printf("전화번호 >> ");
    scanf("%s", newContact->phone);
    printf("이메일 주소 >> ");
    scanf("%s", newContact->email);
    printf("소속 >> ");
    scanf("%s", newContact->affiliation);
    printf("직책 >> ");
    scanf("%s", newContact->position);

    newContact->next = *head;
    *head = newContact;

    printf("----연락처가 추가되었습니다----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", newContact->name, newContact->phone, newContact->email, newContact->affiliation, newContact->position);
}

// 연락처 삭제 함수
void deleteContact(Contact** head) {
    if (*head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    char phoneToDelete[20];
    printf("삭제할 전화번호를 입력하세요 >> ");
    scanf("%s", phoneToDelete);

    Contact* current = *head;
    Contact* prev = NULL;

    while (current != NULL && strcmp(current->phone, phoneToDelete) != 0) {
        prev = current;
        current = current->next;
    }

    if (current != NULL) {
        printf("----삭제된 연락처 정보----\n");
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phone, current->email, current->affiliation, current->position);

        if (prev == NULL) {
            *head = current->next;
        } else {
            prev->next = current->next;
        }

        free(current);
    } else {
        printf("해당 전화번호가 없습니다.\n");
    }
}

// 연락처 수정 함수
void modifyContact(Contact* head) {
    if (head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    char phoneToModify[20];
    printf("수정할 전화번호를 입력하세요 >> ");
    scanf("%s", phoneToModify);

    Contact* current = head;

    while (current != NULL && strcmp(current->phone, phoneToModify) != 0) {
        current = current->next;
    }

    if (current != NULL) {
        printf("----기존 연락처 정보----\n");
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phone, current->email, current->affiliation, current->position);

        printf("수정된 연락처 정보를 입력하세요.\n");
        printf("이름 >> ");
        scanf("%s", current->name);
        printf("전화번호 >> ");
        scanf("%s", current->phone);
        printf("이메일 주소 >> ");
        scanf("%s", current->email);
        printf("소속 >> ");
        scanf("%s", current->affiliation);
        printf("직책 >> ");
        scanf("%s", current->position);

        printf("----수정된 연락처 정보----\n");
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phone, current->email, current->affiliation, current->position);
    } else {
        printf("해당 전화번호가 없습니다.\n");
    }
}

// 연락처 검색 함수
void searchContact(Contact* head) {
    if (head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    int option;
    printf("검색 옵션 선택 [(1) 이름 (2) 전화번호 (3) 소속] : ");
    scanf("%d", &option);

    char searchInfo[50];
    printf("검색할 정보 입력 >> ");
    scanf("%s", searchInfo);

    Contact* current = head;
    int found = 0;

    while (current != NULL) {
        switch (option) {
            case 1:
                if (strcmp(current->name, searchInfo) == 0) {
                    found = 1;
                }
                break;
            case 2:
                if (strcmp(current->phone, searchInfo) == 0) {
                    found = 1;
                }
                break;
            case 3:
                if (strcmp(current->affiliation, searchInfo) == 0) {
                    found = 1;
                }
                break;
            default:
                printf("잘못된 옵션입니다.\n");
                return;
        }

        if (found) {
            printf("----검색 결과----\n");
            printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phone, current->email, current->affiliation, current->position);
            break;
        }

        current = current->next;
    }

    if (!found) {
        printf("검색결과가 없습니다.\n");
    }
}

// 전체 연락처 출력 함수
void displayContacts(Contact* head, int option) {
    if (head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    int sorted = 0;
    if (option == 1) {
        printf("출력 옵션 선택 [(1) 이름 순 (2) 소속 순] : ");
        scanf("%d", &sorted);
    }

    Contact* current = head;

    printf("----");

    if (sorted == 1) {
        printf("이름 순 ");
    } else if (sorted == 2) {
        printf("소속 순 ");
    }

    printf("전체 연락처 출력----\n");

    while (current != NULL) {
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phone, current->email, current->affiliation, current->position);
        current = current->next;
    }
}

// 연락처 메모리 해제 함수
void freeContacts(Contact* head) {
    Contact* current = head;
    Contact* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}