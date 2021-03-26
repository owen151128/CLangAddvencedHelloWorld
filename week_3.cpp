#include <iostream> //  표준 InputOutputSteam 헤더 포함

using namespace std;    //  기본 네임스페이스로 std 사용

int main(void)  //  main 함수 선언 및 정의
{
    int num = 12;   //  int형 변수 num 에 12 대입
    int* ptr = &num;    //  int* 형 변수 ptr 에 num에 주소값 대입
    int** dptr = &ptr;  //  int** 형 변수 dptr 에 ptr에 주소값 대입

    int& ref = num; //  int 형 레퍼런스 변수 ref 에 num 변수 대입
    int* (&pref) = ptr; //  int* 형 레퍼런스 변수 pref에 ptr 변수 대입
    int** (&dpref) = dptr;  //  int** 형 레퍼런스 변수 dpref 에 dptr 변수 대입

    cout << ref << endl;    //  ref 변수는 num 변수의 별칭이므로 12 출력
    cout << *pref << endl;  //  pref 변수는 ptr 변수의 별칭이므로 ptr변수에 대해서 포인터 연산을 한 결과(ptr -> num) 12 출력
    cout << **dpref << endl;    // dpref 변수는 dptr 변수의 별칭이므로 dptr 변수에 대해서 이중 포인터 연산을 한 결과(dptr -> ptr -> num) 12 출력

    return 0;   //  main 함수에 대해서 0 return
}
