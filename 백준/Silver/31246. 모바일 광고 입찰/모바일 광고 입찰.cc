
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> bids(N);

    // 광고 지면에 대한 정보를 입력받음
    for (int i = 0; i < N; ++i) {
        cin >> bids[i].first >> bids[i].second;
    }

    // 광고 지면을 MOLOCO의 입찰가를 기준으로 정렬
    sort(bids.begin(), bids.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int low = 0, high = 1e9;

    // 이분 탐색을 통해 X 값을 찾음
    while (low < high) {
        int mid = (low + high + 1) / 2; // 중간값을 올림으로 계산

        int count = 0;
        int lastMaxBid = 0;

        // 각 지면에 대해 MOLOCO의 입찰가를 mid만큼 올렸을 때 MOLOCO가 낙찰받는지 확인
        for (int i = 0; i < N; ++i) {
            int newBid = max(bids[i].first, lastMaxBid) + mid;

            if (newBid > bids[i].second) {
                count++;
            }

            lastMaxBid = max(lastMaxBid, bids[i].first);
        }

        // MOLOCO가 낙찰받는 지면의 개수가 K 이상인 경우 X를 더 줄여서 확인
        if (count >= K) {
            high = mid - 1;
        } else {
            low = mid;
        }
    }

    // 찾은 X 값을 출력
    cout << low << "\n";

    return 0;
}