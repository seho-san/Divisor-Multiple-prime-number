#include <stdio.h>

int main() {
    int n = 0, sum = 0; // 입력받을 수와 약수의 합을 저장할 변수

    // 무한 루프를 돌며 사용자 입력을 받음
    while (1) {
        scanf("%d", &n); // 사용자로부터 정수를 입력받음
        sum = 0; // 약수의 합을 초기화

        // 프로그램 종료 조건: -1을 입력하면 루프를 빠져나감
        if (n == -1) {
            break;
        }

        // 자기 자신을 제외한 약수의 합을 계산
        for (int i = 1; i < n; i++) {
            if (n % i == 0) { // n이 i로 나누어떨어질 때
                sum += i; // i를 약수의 합에 추가
            }
        }

        // n이 완전수일 경우 약수를 출력
        if (sum == n) {
            printf("%d = ", n); // 완전수 식을 출력하기 시작
            for (int i = 1; i < n; i++) {
                if (n % i == 0) { // n의 약수일 때
                    // 마지막 약수가 아닐 경우 '+ '를 추가, 마지막 약수일 경우 '+'를 생략
                    printf(i != n - i ? "%d + " : "%d", i);
                }
            }
        }
        else {
            // n이 완전수가 아닐 경우 메시지를 출력
            printf("%d is NOT perfect.", n);
        }

        printf("\n"); // 줄 바꿈
    }

    return 0;
}
