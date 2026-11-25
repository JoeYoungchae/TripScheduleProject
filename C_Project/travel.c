//국가, 지역, 여행 기간, 인원, 취향 등 여행 정보 관리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "common.h"

void select_trip_info(TravelInfo *info) {
    printf("\n=== 여행 목적지 및 취향 입력 ===\n");
    printf("국가 (예: 대한민국): ");
    scanf("%49s", info->country);

    printf("지역 (예: 서울): ");
    scanf("%49s", info->region);

    printf("여행 취향 선택 (1: 힐링, 2: 관광, 3: 맛집, 4: 쇼핑): ");
    scanf("%d", &info->preference);

    printf("시작일 (YYYY-MM-DD, 예: 2027-01-01): ");
    scanf("%10s", info->start_date);

    printf("종료일 (YYYY-MM-DD, 예: 2027-01-03): ");
    scanf("%10s", info->end_date);

    printf("여행 인원 (예: 2): ");
    scanf("%d", &info->people);

    printf("예산 (예: 300000): ");
    scanf("%d", &info->budget);

    printf("\n입력 완료: %s %s / 취향(%d) / %s ~ %s / %d명 / %d원\n",
           info->country,
           info->region,
           info->preference,
           info->start_date,
           info->end_date,
           info->people,
           info->budget);
}
