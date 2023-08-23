#include <stdio.h>  //라이브러리 추가 -> 기본 함수(프린트,스캔 등) 사용을 위해
//두 변수의 값을 서로 변환하기



void swap(double *pa, double *pb) {  //포인터가 매개변수
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double *midp,double *minp) {
	if (*maxp < *midp) {  //*maxp,즉 maxp가 가리키는 값인 max가 mid보다 작을때

		swap(maxp, midp);  //포인터변수 maxp와 midp를 swap의 매개변수로(주소값 전달)
	}

	if (*midp < *minp) {
		swap(midp, minp);
	}
	
}

int main(void) {
	double max, mid, min;
	printf("실수값 3개 입력 ; ");
	scanf("%lf%lf%lf", &max, &mid, &min); ///lf:long float, double
	line_up(&max, &mid, &min);  //*maxp (포인터변수) 자리에 max의 주소값 대입
	printf("정렬된 값 출력 : %.1lf,%.1lf,%.1lf\n", max, mid, min);
	return 0;

}



