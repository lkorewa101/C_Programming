#include <stdio.h>
// 1km = 0.621371마일(mile)
#define MILE 0.621371

int main ()
{
  double distance = 10.0; // 거리 10마일
  double speed = 3.0; // 속도 3km/h
  double lee_distance = 150.0; // 시작지점으로부터 떨어진 거리 150m
  
  double mile_to_km = distance / MILE; // 마일을 km로 변환
  double remaining_distance = mile_to_km - (lee_distance / 1000.0); // 이씨가 남은 거리를 빼주는데 미터를 km로 변환해서 빼줌
  
  double time = remaining_distance / speed; // 이 씨가 언제 도착하는가?
  
  // 이씨가 몇 시간 안에 도착하는가를 출력
  printf("%f\n", time);
  
  return 0;
}
