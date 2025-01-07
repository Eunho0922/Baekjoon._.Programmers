import sys
input = sys.stdin.readline

# 세그먼트 트리를 생성하는 함수
def build_segment_tree(node, start, end):
    if start == end:  # 리프 노드일 경우
        segment_tree[node] = (arr[start], arr[start])  # (최소값, 최대값)
    else:
        mid = (start + end) // 2
        left_child = node * 2
        right_child = node * 2 + 1
        
        # 왼쪽, 오른쪽 자식 노드 재귀적으로 생성
        build_segment_tree(left_child, start, mid)
        build_segment_tree(right_child, mid + 1, end)
        
        # 현재 노드에 최소값과 최대값 저장
        segment_tree[node] = (
            min(segment_tree[left_child][0], segment_tree[right_child][0]),
            max(segment_tree[left_child][1], segment_tree[right_child][1]),
        )

# 구간 최소값과 최대값을 쿼리하는 함수
def query(node, start, end, left, right):
    if left > end or right < start:  # 구간이 겹치지 않을 경우
        return (float('inf'), -float('inf'))  # 최소값, 최대값의 기본값 반환
    
    if left <= start and end <= right:  # 구간이 완전히 포함될 경우
        return segment_tree[node]
    
    # 구간이 겹칠 경우 왼쪽, 오른쪽 자식에서 쿼리 수행
    mid = (start + end) // 2
    left_child = node * 2
    right_child = node * 2 + 1
    
    left_result = query(left_child, start, mid, left, right)
    right_result = query(right_child, mid + 1, end, left, right)
    
    # 최소값과 최대값을 반환
    return (
        min(left_result[0], right_result[0]),
        max(left_result[1], right_result[1]),
    )

# 입력 처리
N, M = map(int, input().split())
arr = [int(input()) for _ in range(N)]

# 세그먼트 트리 초기화
segment_tree = [None] * (4 * N)
build_segment_tree(1, 0, N - 1)  # 세그먼트 트리 생성

# 쿼리 처리
for _ in range(M):
    a, b = map(int, input().split())
    result = query(1, 0, N - 1, a - 1, b - 1)  # 0-based index로 변환
    print(result[0], result[1])
