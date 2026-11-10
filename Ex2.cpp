#include <iostream>
using namespace std;

int length (char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

int find (char s[] , char w[])
{
    int n = length(s);
    int m = length(w);
    for (int i=0; i <= (n-m) ; i++ )
    {
        int j = 0;
        while(j<m && w[j]==s[i+j])
        {
            j++;
        }
        if (j==m)
        {
            return i;
        }
       
    }
    return -1;
}

void replaceWord(char s[], char w[], char res[], char rep[])
{
    int pos = find(s,w);
    if(pos == -1)
    {
        cout << "Word not found";
        return ;
    }
    int n = length(s);
    int m = length(w);
    int r = length(rep);
    int k = 0;
    int j;
        for(j=0; j<pos; j++)
        {
            res[k] = s[j];
            k++; 
        }
        int f;
        for(f = 0; f<r; f++ )
        {
            res[k] = rep[f];
            k++;
        }
        for(int e = pos+m; e<n; e++)
        {
            res[k] = s[e];
            k++;

        }
        res[k] = '\0';
    }

    int main()
    {
        char s[100];
        cout <<"Enter te Sentence"<<endl;
        cin.getline(s,100);
        char w[100];
        cout<< "Enter the Word to find"<<endl;
        cin.getline(w,100);
        char rep[100];
        cout<< "Enter Replacing Word" << endl;
        cin.getline(rep,100);
        char res[200];
        if(find(s,w) !=-1)
        {
            cout << "Word Found" << endl;
        }
        else
        {
            cout<< "Not found";
            return 0;
        }
        replaceWord(s,w,res,rep);
        cout << "The New Sentence is :" << res << endl;
    }