#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int count;
    cout<<"how many student are there??";
    cin>>count;
    vector<pair<string, float>>students;
    for (int i = 0; i < count; i++)
    {
        string name;
        float grb;
        cout<<"name "<<i+1<<" :";
        cin>>name;
        cout<<"grb"<<i+1<<" :";
        cin>>grb;
        students.push_back({name, grb});
    }
    float sum=0;
    for (const auto& student : students)
    {
      sum+= student.second;
    }
    float avg = sum/ students.size();
    cout<< "avg :"<<avg<<endl;
    
return 0;
}

cout<<"fdiigjdfpogfis[pvsd[jksd[opgjdspogjds]]]";
