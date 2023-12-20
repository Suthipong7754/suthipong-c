#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin >> n;
map<string, pair<int, int>> categories;
while (n--) {
int a, b;
string name;
cin >> a >> b >> name;
categories[name] = {a, b};
}

int x;
cin >> x;
string result;
for (const auto &[name, range] : categories) {
if (x >= range.first && x <= range.second) {
result = name;
break;
}
}
cout << result << endl;
return 0;
}
