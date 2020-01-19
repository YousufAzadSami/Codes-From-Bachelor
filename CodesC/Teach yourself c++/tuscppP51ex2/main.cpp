
// HAS ERRORS I DONT WANNA FIX ....

#include <iostream>
#include <ctime>

using namespace std;

class stopwatch{
        clock_t start;
        clock_t end;
public:
        stopwatch();
        void start();
        void stop();
        ~stopwatch();
};

stopwatch :: stopwatch(){
    start = end = 0;
}
void stopwatch :: start(){
    start = clock();
}
void stopwatch :: stop(){
    end = clock();
}
stopwatch :: ~stopwatch(){
    cout << "Time elapsed : " << ((end-start) / CLOCKS_PER_SEC) << endl;
}

int main()
{
    stopwatch s1;

    s1.start();

    for(int i=0; i<100000;i++){

    }
    s1.stop();

    return 0;
}
