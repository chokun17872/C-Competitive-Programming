/*
TASK: Plate
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int info[10100],q[10100][10]; // q: index1 = id, index2 = room
int main(){
	
	int nc,ns,room,id,size=0,newid,newroom,ch=0,pos;
	char opr;
	scanf("%d %d",&nc,&ns);
	
	for(int i=0 ; i<ns ; i++){
		scanf("%d %d",&room,&id);
		info[id]=room; // index=id value=room
	}
	
	while(1){
		scanf(" %c",&opr);
		if(opr=='X'){
			printf("0\n"); return 0;
		}
		if(opr=='E'){			
			scanf("%d",&newid);
				newroom=info[newid];
				ch=0;
				for(int i=0 ; i<size ; i++){ // check newroom				 
					if(q[i][1]==newroom){						
						ch=1; pos=i; // pos = where you insert new student							 		
					}
				}
				if(ch){ // there is matching room
					for(int i=size-1 ; i>pos ; i--){
						q[i+1][0]=q[i][0],q[i+1][1]=q[i][1];
					}
					q[pos+1][0]=newid,q[pos+1][1]=newroom;	
				}
				else if(!ch){ // array is empty / no matching room 
					q[size][0]=newid /* id */,q[size][1]=info[newid]; // room		
				}						 		
			size++;
		}
		
		if(opr=='D'){
			if(size==0) printf("empty\n");
			else{
				printf("%d\n",q[0][0]); // first student's id
					for(int i=1 ; i<=size+1 ; i++){
						q[i-1][0]=q[i][0],q[i-1][1]=q[i][1];
					}
				size--;	
			}
		}		
	}
	
	return 0;
}

