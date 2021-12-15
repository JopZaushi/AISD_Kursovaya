#include "pch.h"
#include "CppUnitTest.h"
#include "..\Kurswork_AISD\Counting_and_Postfix.h"
#include "..\Kurswork_AISD\String.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		
		TEST_METHOD(Test_String){
			String str;
			str = "1234";
			Assert::IsTrue(str.function_length() == 4);
			Assert::IsTrue(str.empty() == 1);
			Assert::IsTrue(str.last_simv(str) == '4');
			str.pop_last_simv();
			Assert::IsTrue(str.last_simv(str) == '3');
		}
		TEST_METHOD(Test_Couting) {
			char plus = '+', multi = '.', unar_m = 126;
			char seven = '7', dot = '.', five = '5', minus = '-';
			String str_num;
			str_num = "15 2.5 ";
			Culc(plus, str_num);
			Assert::IsTrue(str_num[1] == seven);
			Assert::IsTrue(str_num[2] == dot);
			Assert::IsTrue(str_num[3] == five);

			String str_num2;
			str_num2 = "2 2.5 ";
			Culc(multi, str_num2);
			Assert::IsTrue(str_num2[0] == five);
			
			String str_num3;
			str_num3 = "5 ";
			Culc(unar_m, str_num3);
			Assert::IsTrue(str_num3[0] == minus);
			Assert::IsTrue(str_num3[1] == five);
		}
		TEST_METHOD(Test_Posfix) {
			String str;
			char two = '2', five = '5', four = '4', one = '1', minus = '-', multi = '*', plus = '+', stepen = '^';
			str = "5-4*1+2^4";
			Postfix_notation_and_Calculation(str);
			Assert::IsTrue(str[0] == five);
			Assert::IsTrue(str[2] == four);
			Assert::IsTrue(str[4] == one);
			Assert::IsTrue(str[6] == multi);
			Assert::IsTrue(str[8] == minus);
			Assert::IsTrue(str[10] == two);
			Assert::IsTrue(str[12] == four);
			Assert::IsTrue(str[14] == stepen);
			Assert::IsTrue(str[16] == plus);
		}
	};
}
