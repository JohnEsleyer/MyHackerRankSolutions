
#include <vector>

int birthdayCakeCandles(std::vector<int> candles){
    int count = 0;
    int max = 0;

    for (std::size_t i = 0; i < candles.size(); i++){
        int num = candles[i];
        if (num > max){
            max = num; 
            count = 1;
        }else if (max == num){
            count++;
        }
    }
    return count;
}
