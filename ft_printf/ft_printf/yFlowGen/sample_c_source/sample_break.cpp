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
        printf("���l��1�ł�?n");
        break;
      case 2:
        printf("���l��2�ł�?n");
        break;
      case 3:
        printf("���l��3�ł�?n");
        break;
      default:
        printf("���̒l�ł�?n");
    }

	    // An example of a standard for loop  
    for (int i = 1; i < 10; i++)  
    {  
        cout << i << '\n';  
        if (i == 4)  
            break;  
    }  
	
}  

//�e�X�g�p�^�[���ǉ� (2020/6/14)
void main(){
	if(1){
		for(int i=0;i<10;i++){
			if(1){
				if(1){
					int a = 0;
				}
				break;//break������if(2)�����s����̂����Ғl
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