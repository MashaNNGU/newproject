#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg;
    cout << "������� ������ ������� �����=  ";
    cin >> arg;
    cout << "������� � ����� ������� ����� ��������= ";
    double st;
    cin >> st;
    cout << "�� ������ �����=" << arg <<endl;
    res = sqrt(arg);
    cout <<"��������� ���������� ����������� �����=  "
         << res
         << endl;
    cout << "��������� ���������� � �������" << pow(arg,st) <<endl;
    double fast;
    fast = rand();
    cout <<" � ������ ��������� �����=" << fast <<endl;
      
    cout << "��������� �����, ������ ���=";
    int aster;
    cin >> aster;
    switch(aster)
                {
                       case 0: cout << "����" ;
                       break;
                       case 1: cout << "����";
                         break;
                       case 2: cout << "���";
                         break;
                       case 3: cout << "���";
                         break;
                         default: cout << "� �� �����, �� �������";
                 }      
                 // � ������ ����������� 
                   cout << "������� ������ �����= " <<endl;
                   int we;
                   cin >> we;
                   cout << "������� ������ �����= " ; 
                   int iop;
                   cin >> iop;
                   cout << "��� � ���� �������=" << endl;
                   char fult;
                   cin >> fult;
                   switch (fult)
                          {
         case '+' : cout << "������� �������, ��� ���������=" << (we+iop);
         break;
         case '-' : 
              {
                  cout << "������� �������, ���� ��������� �����" << endl;
                  int sum;
                  sum = we-iop;
                  if (we>iop) cout << "��� ���������, ��� ���������=" << sum << endl;
                  else
                  cout << "����� ��������� ���� �������������, �� ��� ��=" << sum << endl;
                  }
        break;
              
} 
// �� � ������ �������
// ������� ��� ��� ���� �� � �����     
for (int q=1;q<=10;q++)
{
cout << q <<" ";            
if (q>5) cout << endl;
}
system("pause");         
return 0;
}
          
