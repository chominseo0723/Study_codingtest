# 줄 서는 방법
   - https://school.programmers.co.kr/learn/courses/30/lessons/12936

## 문제 설명
n명의 사람이 일렬로 줄을 서고 있습니다. n명의 사람들에게는 각각 1번부터 n번까지 번호가 매겨져 있습니다. n명이 사람을 줄을 서는 방법은 여러가지 방법이 있습니다. 예를 들어서 3명의 사람이 있다면 다음과 같이 6개의 방법이 있습니다.

[1, 2, 3]
[1, 3, 2]
[2, 1, 3]
[2, 3, 1]
[3, 1, 2]
[3, 2, 1]
사람의 수 n과, 자연수 k가 주어질 때, 사람을 나열 하는 방법을 사전 순으로 나열 했을 때, k번째 방법을 return하는 solution 함수를 완성해주세요.

제한사항
n은 20이하의 자연수 입니다.
k는 n! 이하의 자연수 입니다.

## 알고리즘
numbers 배열에 1부터 n까지의 숫자를 넣고, factorial에 n! 값을 저장한다.

k--로 0-based index로 변경한다.

**k / factorial**을 사용하여 k번째 순열의 첫 번째 값을 계산한다. 이후, 선택된 값을 numbers에서 제거하고 k %= factorial로 남은 부분에 대해 계속 계산한다.

각 자리를 계산하면서, k의 값이 어떻게 변하는지 추적하여 k번째 순열을 찾는다.

예시:
입력 예시: n = 3, k = 5

3! = 6 (전체 순열 수)

첫 번째 자리에 대해 k = 5에서 가능한 값은 k / 2! = 5 / 2 = 2, 즉 세 번째 숫자가 선택된다. (3이 선택됨)

numbers에서 3을 제거하고, k %= 2! = 1로 갱신한다.

두 번째 자리에 대해 k = 1, 즉 두 번째 숫자가 선택한다. (1이 선택됨)

남은 numbers = [2]에서 마지막 숫자 2가 선택된다.

>>[3, 1, 2]
