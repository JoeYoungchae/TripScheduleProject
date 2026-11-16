// 공통 구조체 및 상수를 저장
//
// 다른 C 파일에서 구조체 사용 시 #include "common.h"를 포함하여 쓰면 됩니다.

#ifndef COMMON_H
#define COMMON_H

// 1. 여행 정보 구조체
typedef struct {
    char country[50];       // 국가
    char region[50];        // 지역
    char start_date[11];    // 여행 시작 날짜
    char end_date[11];      // 여행 종료 날짜
    int people;             // 여행 인원
    int preference;         // 여행 취향
    int budget;             // 여행 예산
} TravelInfo;


// 2. 여행 일정 구조체
typedef struct {
    int schedule_id;        // 일정 고유 번호
    char date[11];          // 일정 날짜
    char time[6];           // 일정 시간
    char place[100];        // 방문 장소
    char activity[200];     // 활동 내용
    int estimated_cost;    // 예상 비용
} Schedule;


// 3. 여행 비용 구조체
typedef struct {
    int flight_cost;        // 항공권 비용
    int lodging_cost;       // 숙박 비용
    int food_cost;          // 식비
    int transport_cost;     // 교통비
    int other_cost;         // 기타 비용
    int total_cost;         // 총 예상 비용
} CostInfo;


// 4. 여행 장소 정보 구조체
typedef struct {
    char place_name[100];  // 장소 이름
    char country[50];      // 국가
    char region[50];       // 지역
    int category;           // 장소 유형
    int estimated_cost;    // 예상 이용 비용
} PlaceInfo;


// 여행 취향 상수
#define HEALING 1
#define TOURISM 2
#define FOOD 3
#define SHOPPING 4

#endif
