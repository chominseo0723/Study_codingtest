# 다익스트라 알고리즘
  - 다익스트라 알고리즘은 가중치가 있는 그래프에서 최단 경로를 찾는 알고리즘으로, 주어진 그래프에서 하나의 출발점에서 다른 모든 점까지의 최단 경로를 계산할 때 사용된다.

## 알고리즘
  - dist 배열은 각 정점까지의 최단 거리를 저장하고, 처음에는 모든 정점의 거리를 Integer.MAX_VALUE로 설정한다. 출발점은 0으로 설정한다.
  - visited 배열은 각 정점이 이미 방문되었는지를 추적한다.
  - dijkstra 메서드에서는 모든 정점에 대해 방문하지 않은 정점 중 가장 작은 최단 거리를 가지는 정점을 찾는다.
  - 정점을 찾은 후, 그 정점을 방문 처리하고, 해당 정점을 통해 연결된 다른 정점들의 거리를 갱신한다. 이 과정은 모든 정점을 방문할 때까지 반복한다.