class Solution {
public:
    string intToRoman(int num) {
        vector<int> standard_form;
        int i=1;
        while(num>0){
            int number= num%(10*i);
            standard_form.push_back(number);
            i=i*10;
            num=num-number;
        }
		cout<<standard_form.size()<<endl;
		reverse(standard_form.begin(),standard_form.end());
        
        for(int u=0;u<standard_form.size();u++){
            cout<<standard_form[u]<<" ";
        }
		vector<int> each_digit;
		string roman="";
		for(int j=0;j< standard_form.size();j++){
			while(standard_form[j]>0){
				int digit= standard_form[j]%10;
				each_digit.push_back(digit);
				standard_form[j]=standard_form[j]/10;
			}
			int size= each_digit.size();
			reverse(each_digit.begin(),each_digit.end());
			if(size==4){
				int nooftimes= each_digit[0];
				for(int i=0;i<nooftimes;i++){
					roman+='M';
				}
			}
			else if(size==3){
				if(each_digit[0]==4){
					roman+="CD";
				}
				else if(each_digit[0]==9){
					roman+="CM";
				}
				else if(each_digit[0]<4){
					int times= each_digit[0];
					for(int h=0;h<times;h++){
						roman+='C';
					}
				}
				else if(each_digit[0]==5){
					roman+='D';
				}
				else if(each_digit[0]>5 && each_digit[0]<9){
					roman+='D';
					for(int p=6;p<=each_digit[0];p++){
						roman+='C';
						
					}
				}
			}
			else if(size==2){
				if(each_digit[0]==4){
					roman+="XL";
				}
				else if(each_digit[0]==9){
					roman+="XC";
				}
				else if(each_digit[0]<4){
					int times_prime= each_digit[0];
					for(int h=0;h<times_prime;h++){
						roman+='X';
					}
				}
				else if(each_digit[0]==5){
					roman+='L';
				}
				else if(each_digit[0]>5 && each_digit[0]<9){
					roman+='L';
					for(int p=6;p<=each_digit[0];p++){
						roman+='X';
						
					}
				}

			}
			else if(size==1){
				if(each_digit[0]==4){
					roman+="IV";
				}
				else if(each_digit[0]==9){
					roman+="IX";
				}
				else if(each_digit[0]<4){
					int times_prime= each_digit[0];
					for(int h=0;h<times_prime;h++){
						roman+='I';
					}
				}
                else if(each_digit[0]==5){
					roman+='V';
				}
				else if(each_digit[0]>5 && each_digit[0]<9){
					roman+='V';
					for(int p=6;p<=each_digit[0];p++){
						roman+='I';
						
					}
				}

			}
			each_digit.clear();
		}
		return roman;

        
    }
};