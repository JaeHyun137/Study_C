#include <stdio.h>  //���̺귯�� �߰� -> �⺻ �Լ�(����Ʈ,��ĵ ��) ����� ����
//�� ������ ���� ���� ��ȯ�ϱ�



void swap(double *pa, double *pb) {  //�����Ͱ� �Ű�����
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double *midp,double *minp) {
	if (*maxp < *midp) {  //*maxp,�� maxp�� ����Ű�� ���� max�� mid���� ������

		swap(maxp, midp);  //�����ͺ��� maxp�� midp�� swap�� �Ű�������(�ּҰ� ����)
	}

	if (*midp < *minp) {
		swap(midp, minp);
	}
	
}

int main(void) {
	double max, mid, min;
	printf("�Ǽ��� 3�� �Է� ; ");
	scanf("%lf%lf%lf", &max, &mid, &min); ///lf:long float, double
	line_up(&max, &mid, &min);  //*maxp (�����ͺ���) �ڸ��� max�� �ּҰ� ����
	printf("���ĵ� �� ��� : %.1lf,%.1lf,%.1lf\n", max, mid, min);
	return 0;

}



