#include<stdio.h>

template <typename T1,typename T2>
class Comparison {
public:
	//�����o�ϐ�
	T1 num1;
	T2 num2;

	//�R���X�g���N�^
	Comparison(T1 num1, T2 num2) :num1(num1), num2(num2) {};

	//�����o�֐�
	T1 Min() {
		if (num1 < num2) {
			return static_cast<T1> (num1);
		}
		else {
			return static_cast<T1> (num2);
		}
		return static_cast<T1> (num1);
	}
};

int main() {

	Comparison<int, int>IntIntResult(10, 20);
	printf("int��int�F%d\n", IntIntResult.Min());

	Comparison<float, float>FloatFloatResult(10.0f, 20.0f);
	printf("float��float�F%f\n", FloatFloatResult.Min());

	Comparison<double, double>DoubleDoubleResult(10.0, 20.0);
	printf("double��double�F%f\n", DoubleDoubleResult.Min());

	Comparison<int,float>IntFloatResult(10, 20.0f);
	printf("int��float�F%d\n", IntFloatResult.Min());

	Comparison<int,double>IntDoubleResult(10, 20.0);
	printf("int��double�F%d\n", IntDoubleResult.Min());

	Comparison<float,double>FloatDoubleResult(10.0f, 20.0);
	printf("float��double�F%f\n", FloatDoubleResult.Min());

	return 0;
}