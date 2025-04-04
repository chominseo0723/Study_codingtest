# 페인트칠 문제

이 프로그램은 벽의 특정 구역에 페인트를 칠하는 작업을 최적화하여, 필요한 최소한의 페인트 작업 횟수를 계산

---

## 문제 설명

- **입력**:
  - `n`: 벽의 전체 길이 (1부터 `n`까지의 번호가 존재)
  - `m`: 페인트 롤러의 길이 (한 번에 칠할 수 있는 최대 구역의 길이)
  - `section`: 페인트칠이 필요한 구역의 번호를 나타내는 정수 배열
    - 예: `[2, 3, 6]` (2번, 3번, 6번 구역에 페인트칠 필요)

- **출력**:
  - 필요한 최소한의 페인트 작업 횟수를 나타내는 정수

---

## 알고리즘

1. **페인트칠이 필요한 구역 표시**:
   - `section` 배열을 순회하여, 각 구역 번호와 해당 구역이 칠해졌는지 여부를 `Map`으로 관리
   - 초기 상태에서 모든 구역은 `false`로 설정(칠하지 않은 상태)

2. **페인트 작업 반복**:
   - `section`의 각 구역을 순회하며, 칠하지 않은 구역(`false`)을 발견하면 페인트 작업을 수행
   - 페인트 작업을 시작한 구역부터 페인트 롤러의 길이(`m`)만큼 칠해진 것으로 표시

3. **페인트 작업 카운트**:
   - 새로운 페인트 작업을 수행할 때마다 작업 횟수(`paintCnt`)를 증가시킴

4. **결과 반환**:
   - 최소 페인트 작업 횟수를 반환
