#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, A, B;
ll x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> A >> B;
  x = 1;
  y = 1;
  while (0 < (N--)) {
    x += A;
    y += B;

    if (x < y) {
      swap(x, y);
    } else if (x == y) {
      --y;
    }
  }

  cout << x << ' ' << y;

  return 0;
}