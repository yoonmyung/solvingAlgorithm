#include <vector> 
#include <unordered_set> 
using namespace std; 

// 다른 사람 풀이
// 내 풀이는 DP배열을 N의 가짓수로 잡았더니 시간초과만 계속 발생함 ex) number = 12, N = 5면 DP배열을 55까지 잡음.. 12는 5, 55의 조합을 통해서 표현할 수 있으므로
// N 1개로 만들 수 있는 숫자 = N
// N 2개로 만들 수 있는 숫자 = NN, N+N, N-N, N*N, N/N (즉 NN과 N이 1개일 때를 사칙연산으로 묶은 것)
// N k개로 만들 수 있는 숫자를 make(k)라고 한다면
// m(k) = N이 k개인 숫자, m(i) +-*/ m(j) 이때 i+j=k

int get_Ns(int N, int idx) { 
    // NN(idx==1), NNN(idx==2), NNNN(idx==3)...과 같은 형태만드는 함수
    int result = N; 
    for (int i = 1; i <= idx; i++) { 
        result = result * 10 + N; 
    } 
    return result; 
} 

int solution(int N, int number) { 
    if (N == number) return 1;  // N과 number가 같다면, N을 한번 사용해서 number를 만들 수 있음
    
    vector< unordered_set<int> > DP(8); 
    //DP에 저장할 것 -> DP[i] : i개의 N으로 만들 수 있는 숫자들 (set), 여기서 순서는 중요하지 않으므로 정렬 연산을 줄이기 위해 unordered_set 사용
    
    DP[0].insert(N); // 한개의 N으로 만들 수 있는 수는 N뿐임
    
    for (int k = 1; k < 8; k++) { 
        // DP[k]에 NNN...(k+1만큼 반복)과 같은 형태 삽입
        DP[k].insert(get_Ns(N, k));
        
        // DP[k]에 사칙 연산의 결과또한 삽입
        for (int i = 0; i < k; i++) { 
            for (int j = 0; j < k; j++) { 
                if (i + j + 1 != k) continue; 
                // i+j+1 == k 일때
                for (int a : DP[i]) { 
                    for (int b : DP[j]) { 
                        DP[k].insert(a + b); 
                        DP[k].insert(a * b);
                        // 검사가 필요한 연산들
                        // (1) 음수 존재하면 안됨
                        if (a - b > 0) DP[k].insert(a - b); 
                        // (2) 0 존재하면 안됨
                        if (a / b > 0) DP[k].insert(a / b); 
                    } 
                } 
            } 
        }
        
        if (DP[k].find(number)!=DP[k].end()) //DP set에 number에 해당하는 값이 있으면 k+1을 반환 (k가 작을수록 전체 N 사용횟수가 적으므로 바로 return하는 것)
            return k + 1; 
    } 
    return -1; 
}