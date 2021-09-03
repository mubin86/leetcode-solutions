void rec(string &temp, int start, int end){
    if(start == end){
        return;
    }

    swap(temp[start], temp[end]);   
    rec(temp, start+1, end-1);
}

int main()
{
    string str;
    cin>>str;
    rec(str, 0, 4);
 
    return 0;
}