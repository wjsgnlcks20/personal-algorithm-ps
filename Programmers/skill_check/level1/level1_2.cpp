#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n - 1;
    for(int i = 1; i < n; i++){
        if(n % i == 1) return i;
    }
    return answer;
}