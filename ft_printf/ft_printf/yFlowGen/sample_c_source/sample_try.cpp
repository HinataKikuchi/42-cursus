try_fnc(){
	a = 1;
	TRY {
	books.Open(strExsPath,
		NonOption,NonOption,NonOption,NonOption,NonOption,NonOption,
		NonOption,NonOption,NonOption,NonOption,NonOption,NonOption,NonOption,NonOption);
	}
	CATCH(CException, e) 
	{
		goto End;
	}
	END_CATCH

	app.put_UserControl(FALSE);	// ユーザ操作禁止
	app.put_DisplayAlerts(FALSE);	// 上書きアラートを出さない

	MyData md;  
	try {  
	   // Code that could throw an exception  
	   md = GetNetworkResource();  
	}  
	catch (const networkIOException& e) {  
	   // Code that executes when an exception of type  
	   // networkIOException is thrown in the try block  
	   // ...  
	   // Log error message in the exception object  
	   cerr << e.what();  
	}  
	catch (const myDataFormatException& e) {  
	   // Code that handles another exception type  
	   // ...  
	   cerr << e.what();  
	}  
	b = 2;
	d = 3;
	End:

}
  
// The following syntax shows a throw expression  
MyData GetNetworkResource()  
{  
   // ...  
   if (IOSuccess == false)  
      throw networkIOException("Unable to connect");  
   // ...  
   if (readError)  
      throw myDataFormatException("Format error");   
   // ...  
}  


// keyword__finally.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyException: public System::Exception{};  
  
void ThrowMyException() {  
   throw gcnew MyException;  
}  
  
int main() {  
   try {  
      ThrowMyException();  
   }  
   catch ( MyException^ e ) {  
      Console::WriteLine(  "in catch" );  
      Console::WriteLine( e->GetType() );  
   }  
   finally {  
      Console::WriteLine(  "in finally" );  
   }  
}  