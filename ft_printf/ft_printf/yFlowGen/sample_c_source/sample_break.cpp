#include <iostream>  
using namespace std;  
  
int main()  
{  
	int i;
    // An example of a standard for loop  
    for (int i = 1; i < 10; i++)  
    {  
        cout << i << '\n';  
    	if (i == 4)  {
	    	if (i == 3)  {
	            break;  
	    	}
	   	}
    }  
  
    // An example of a range-based for loop  
    int nums []{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
  
    for (int i : nums) {  
        if (i == 4) {  
            break;  
        }  
        cout << i << '\n';  
    }
    int x = 3;
    
    switch(x){
      case 1:
        printf("数値は1です?n");
        break;
      case 2:
        printf("数値は2です?n");
        break;
      case 3:
        printf("数値は3です?n");
        break;
      default:
        printf("他の値です?n");
    }

	    // An example of a standard for loop  
    for (int i = 1; i < 10; i++)  
    {  
        cout << i << '\n';  
        if (i == 4)  
            break;  
    }  
	
}  

//テストパターン追加 (2020/6/14)
void main(){
	if(1){
		for(int i=0;i<10;i++){
			if(1){
				if(1){
					int a = 0;
				}
				break;//breakした後if(2)を実行するのが期待値
			}
		}
	}
	if(2){
		int b = 0;
	}
}

BOOL CCamCardDlg::PreTranslateMessage(MSG* pMsg)
{
	if( WM_KEYDOWN == pMsg->message )
	{
		switch( pMsg->wParam )
		{
			case VK_RETURN:
				OnBnClickedRead();
				return FALSE;
			case VK_ESCAPE:
				return FALSE;
			default:
				break;
		}
	}

	return CDialog::PreTranslateMessage(pMsg);
}