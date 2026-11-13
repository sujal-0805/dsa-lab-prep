#include <iostream>
using namespace std;
 int length(char s[])
 {
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
 }

 int find(char s[] , char w[])
 {
    int n = length(s);
    int m = length(w);
    int i =0;
    while( i <=n-m)
    {
        int j =0;
        while(j<m && s[i+j] == w[j])
        {
            j++;
        }
        if(j==m)
        {
            cout << "Word Found " << "at position" << i << endl;
            return i;
        }
        i++;
    }
    return -1;
 }

 int replace(char s[] , char w[] , char rep[] , char res[])
 {
    int n = length(s);
    int m = length(w);
    int pos = find(s,w);
    int r = length(rep);
    int k = 0;
    if(pos == -1)
    {
        cout << "Since Word not Found" << s <<endl;
        return 0 ;
    }
    {
    for(int i = 0 ; i<pos ; i++)
    {
        res[k] = s[i];
        k++;
    }
    for(int j = 0; j<r ; j++)
    {
        res[k] = rep[j];
        k++;
    }
    for(int l = pos + m ; l<=n ; l++)
    {
        res[k] = s[l];
        k++;
    }
    cout << "The New Sentance is :" << res << endl;
    return 0;
 }
 }

 int main()
 {
    char s[100];
    char w[100];
    char rep[100];
    char res[200];

    cout << "Enter Sentence" << endl;
    cin.getline(s,100);
    cout << "Enter Word to find" << endl;
    cin.getline(w,100);
    cout << "Enter Word to replace" << endl;
    cin.getline(rep ,100);

 
 replace(s,w,rep,res);
 }