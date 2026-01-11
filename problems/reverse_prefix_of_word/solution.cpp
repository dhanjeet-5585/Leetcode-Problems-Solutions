class Solution {
public:
    int index_of_ch(string word,char ch){
        int size= word.size();
        bool flag=false;
        for(int i=0;i<size;i++){
            if(word[i]==ch){
                flag=true;
                return i;
            }
        }
        if(!flag) return -1;
        return -1;
    }
    string reversePrefix(string word, char ch) {
        int value= index_of_ch(word,ch);
        string new_word="";
        if(value==-1) return word;
        else{
            
            int index= value;
            for(int i=index; i>=0;i--){
                new_word+= word[i];
            }
            for(int i=value+1;i< word.size();i++){
                new_word+= word[i];
            }

        }
        return new_word;

        
    }
};