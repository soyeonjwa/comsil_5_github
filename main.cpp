#include <stdio.h>
#include "Stack.h"

void prnMenu(){
	cout<<"*******************************************"<<endl;
	cout<<"* 1.»ğÀÔ    2. »èÁ¦    3. Ãâ·Â   4. Á¾·á *"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<endl;
	cout<<"¿øÇÏ½Ã´Â ¸Ş´º¸¦ °ñ¶óÁÖ¼¼¿ä: ";
}

int main(){
	    int mode, selectNumber, tmpItem;
		LinkedList<int> *p;
		bool flag = false;

		cout<<"ÀÚ·á±¸Á¶ ¼±ÅÃ(1: Stack, Other: Linked List): ";
		cin>>mode;
						    
		if(mode == 1)
			p = new Stack<int>();    // ì •ìˆ˜ë¥¼ ì €ì¥í•˜ëŠ” ìŠ¤íƒ
			
		else
			p = new LinkedList<int>();


		do{
			prnMenu();
			cin>>selectNumber;
			
			switch(selectNumber){ 
				case 1:
					cout<<"¿øÇÏ½Ã´Â °ªÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä: ";
					cin>>tmpItem;    p->Insert(tmpItem);
					cout<<tmpItem<<"°¡ »ğÀÔµÇ¾ú½À´Ï´Ù."<<endl;
					break;
					
				case 2:
					if(p->Delete(tmpItem)==true)
						cout<<tmpItem<<"°¡ »èÁ¦µÇ¾ú½À´Ï´Ù."<<endl;
						
					else cout<<"ºñ¾ú½À´Ï´Ù. »èÁ¦ ½ÇÆĞ"<<endl;
					break;
					
				case 3:
					cout<<"Å©±â: "<<p->GetSize()<<endl;
					p->Print();
					break;
					
				case 4:
					flag = true;     break;
					
				default:
					cout<<"Àß¸ø ÀÔ·ÂÇÏ¼Ì½À´Ï´Ù."<<endl;
					break;
			
			}
			
			if(flag) break;
			
		} while(1);
		
		return 0;
}

