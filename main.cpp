#include <iostream>
#include <math.h>


using namespace std;

struct PolaryCoord{
	float angle; //угол
	float len; //длина 
}; //структуры полярных координат

float find_len(struct PolaryCoord P1,struct PolaryCoord P2){
	float angle_between_sides = fabs(P1.angle - P2.angle); //находим углы между двумя сторонами
	float third_side = sqrt(P1.len * P1.len + P2.len*P2.len - 2*P1.len*P2.len*cos(angle_between_sides)); // по теореме косинусов находим 3 сторону
	return third_side;
}

int main(void){
	struct PolaryCoord P1;
	struct PolaryCoord P2;//инициализация 3 полярных координат (выделяем память)
	struct PolaryCoord P3;

	float len_of_all; //наш результат 
	
	cout<<"Enter coord for P1: ";//просим ввести координаты для P1
	cin>>P1.angle>>P1.len;
	
	cout<<"Enter coord for P2: ";//просим ввести координаты для P2

	cin>>P2.angle>>P2.len;

	cout<<"Enter coord for P3: ";//просим ввести координаты для P3

	cin>>P3.angle>>P3.len;

	len_of_all = find_len(P1,P2);//находим длину ломаной между P1 и P2

	len_of_all += find_len(P2,P3);//находим длину ломаной между P2 и P3 и складываем с длиной ломаной P1 и P2 находим общую ломаную

	cout<<len_of_all<<endl;//вывод



	return 0;
}
