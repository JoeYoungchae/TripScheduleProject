#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "common.h"

void view_schedules(Schedule list[], int count) {
    int i = 0;

    printf("\n==================== 여행 일정 조회 ====================\n");

    if (count == 0) {
        printf("등록된 여행 일정이 없습니다.\n");
        printf("========================================================\n");
        return;
    }

    printf("%-6s %-12s %-8s %-20s %-10s\n", "번호", "날짜", "시간", "장소", "예상비용");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%-6d %-12s %-8s %-20s %d원\n",
               list[i].schedule_id,
               list[i].date,
               list[i].time,
               list[i].place,
               list[i].estimated_cost);
    }

    printf("========================================================\n");
}
