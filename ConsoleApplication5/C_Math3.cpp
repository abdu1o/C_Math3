#include <iostream>
using namespace std;


//(1)-----------------------------------------
//int main()
//{
//    double km;
//    double time;
//
//    cout << "Enter distance to airport: ";
//    cin >> km;
//
//    cout << "Enter time to arrive (minutes): ";
//    cin >> time;
//
//    cout << "U need a speed of: " << km / (time / 60) << "km/h \n";
//   
//}
//--------------------------------------------


//(2)-----------------------------------------
//int main()
//{
//	int sec;
//	int work_day = 8 * 3600;
//
//	cout << "Enter time since start of working day (seconds): ";
//	cin >> sec;
//
//	cout << "U have left: " << (work_day - sec) / 3600 << "\n";
//
//}
//--------------------------------------------


//(3)-----------------------------------------
//int main()
//{
//	int price;
//	int count;
//	int disc;
//
//	cout << "Enter count of laptops, price and discount: \n";
//	cin >> count >> price >> disc;
//
//	cout << "U need to pay " << price * count - ((price * count * disc) / 100) << "grn \n";
//}
//--------------------------------------------


//(4)-----------------------------------------
//int main()
//{
//	int pass;
//	int not_pass;
//	
//
//	cout << "Enter count of passed students: ";
//	cin >> pass;
//
//	cout << "Enter count of not passed students: ";
//	cin >> not_pass;
//
//	cout << "Percent of not pass: " << not_pass * 100 / (pass + not_pass);
//}	
//--------------------------------------------


//(5)-----------------------------------------
//int main()
//{
//	int sec;
//	int time = 24 * 3600;
//	int rem_h;
//	int rem_m;
//	double rem_s;
//	
//
//	cout << "Enter count of seconds from the start of day: ";
//	cin >> sec;
//
//	int rem_time = time - sec;
//
//	rem_h = rem_time / 3600;
//	rem_m = rem_time / 60 - rem_h * 60;
//	rem_s = rem_time - rem_m * 60 - rem_h * 3600;
//
//	cout << "hours:" << rem_h <<"\n min: " << rem_m << "\n sec: " << rem_s;
//}	
//--------------------------------------------


//(6)-----------------------------------------
int main()
{
	double summ; 
	double percent;
	int term;

	
	cout << "Enter your deposit amount: ";
	cin >> summ;

	cout << "Enter ur term length (month): ";
	cin >> term;

	cout << "Enter ur interest rate for year: "; // процентная ставка
	cin >> percent;

	cout << "Ur money in future " << summ * ((percent / 100) / 12 * term) + summ << "\n";
}	
//--------------------------------------------
