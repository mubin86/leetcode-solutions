class Solution {
public:
//      int count = 0;
        
//     void findPrime(int n){
//         if(n == 2){
//             count++;
//             return;
//         }
//         bool flag = true;
//         for(int i = 2; i<= sqrt(n); i++){
//             if(n%i == 0){
//                 flag = false;
//                 break;
//             }
//         }
        
//         if(flag){
//             count++;
//         }
//     }
    
//     int countPrimes(int n) {
//         if(n == 0 || n==1){
//             return false;
//         }
        
//         for(int i = 2; i<n; i++){
            
//             findPrime(i);
//         }
        
//         return count;
//     }
    
    
        
    
    int Sieve(int n){
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        int count = 0;
        
        if(n == 0 || n==1){
            return 0;
        }
        
        for(int p = 2; p*p <=n; p++){
            
            for(int i = p*p; i<=n; i +=p){
                prime[i] = false;
            }
        }
        
        for(int p =2; p<n; p++){
            if(prime[p]){
                count++;
            }
        }
          
        return count;
        
    }
    
    int countPrimes(int n) {
        return Sieve(n);
    }
    
    
};