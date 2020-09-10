#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

struct Person{ //created a person
  int speed;
  bool infected = false;
};

void swapPerson(Person *p1, Person *p2)  //function to swap two persons 
{   
    int tempSpeed = (*p1).speed;  
    (*p1).speed = (*p2).speed;  
    (*p2).speed = tempSpeed;  

    if((*p1).infected || (*p2).infected){ //if any one person  is infected => make both infected because they crossed each other
      (*p1).infected = true;
      (*p2).infected = true;
    }
}  

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
	  cin>>n;
	  vector<Person> person(n);
    vector<Person> tempPerson(n);
    vector<int> Infected(n);
	  for(int i=0;i<n;i++){ //input speeds of athletes
      cin>>person[i].speed;
    }

    for(int i=0;i<n;i++){ //assigning persons to temporary persons
      tempPerson[i] = person[i];
    }
    
    for(int i=0;i<n;i++){ 
      person[i].infected = true; // assuming i-th person is infected

      for (int k = 0; k < n-1; k++)    // bubble sorting to check if two persons will cross each other or not
        for (int j = 0; j < n-k-1; j++)  
          if(person[j].speed > person[j+1].speed)
            swapPerson(&person[j], &person[j+1]);
          
      int infections=0;
      for(int k = 0; k < n; k++){ //calculate how many persons are infected after a long period of time when i-th person was infected
        if(person[k].infected) infections++;
      }
      Infected[i]=infections; //stored number of persons who got infected due to i-th infected person
      
      for(int k = 0; k < n; k++){ //again assigning initial values of speed and infected to each person.
        person[k] = tempPerson[k];
      }

      
    }
	  
    sort(Infected.begin(),Infected.end()); //sorting to get minimum and maximum infections at very ends of 'Infected' vector
    cout<<Infected[0]<<" "<<Infected[n-1]<<endl;
	
  }
  return 0;
}
