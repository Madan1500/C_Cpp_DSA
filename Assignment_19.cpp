#include <iostream>
using namespace std;
enum score{
    loose,draw,win
};
class Game
{
private:
    int *p = new int[5];

public:
    ~Game()
    {
        delete p;
    }
    void setScore(int round, int score)
    {
        if (round > 5)
        {
            cout << "Only 5 rounds accepted";
        }
        else
        {
            p[round - 1] = score;
        }
    }
    void getScore(int round)
    {
        cout << "Round- " << round << ":\tScore: " << p[round - 1] << endl;
    }
};
class GameResult:public Game
{
    private:
        int *p=new int[5];
    public:
        ~GameResult()
        {
            delete p;
        }
        void storeResult()
        {
            cout<<"2 for win\n1 for draw\n0 for loose"<<endl;
            int i=0,round=1;
            while(i<5)
            {
                cout<<"Enter round "<<round<<" score: ";
                cin>>p[i];
                i++;
                round++;
            }
        }
        void getResult()
        {
            int i,j=1;
            for(i=0;i<5;i++,j++)
            {
                string q;
                if(p[i]==win)
                    q="win";
                else if(p[i]==draw)
                    q="draw";
                else
                    q="loose";
                
                cout<<"Round "<<(j)<<":\tScore: "<<q<<endl;
            }   
        }
        void finalResult()
        {
            int i,count_win_chance=0,count_loose_chance=0;
            for(i=0;i<5;i++)
            {
                if(p[i]==win)
                    count_win_chance++;
            }
            for(i=0;i<5;i++)
            {
                if(p[i]==loose)
                    count_loose_chance++;
            }
            if(count_win_chance>=3)
                cout<<"Final Result:\tWIN";
            else if(count_loose_chance>=3)
                cout<<"Final Result:\tLOOSE";
            else if(count_loose_chance==count_loose_chance)
                cout<<"Final Result:\tDRAW";
        }
        
};
class Actor{
    char name[100];
    int age;
    public:
        void setData()
        {
            cout<<"Enter actor name: ";
            cin.getline(name,100);
            cout<<"Enter "<<name<<" age: ";
            cin>>age;
        }
        void getData()
        {
            cout<<"---------------------------------------------------------\n";
            int i;
            cout<<"Name: ";
            for(i=0;name[i];i++)
            {
                cout<<name[i];
            }
            cout<<"\nAge: "<<age<<endl;
        }
};
class TVActor:public Actor
{
    int number_of_TV_projects_done;

    public:
        void set_number_of_TV_projects_done()
        {
            cout<<"Enter number of TV projects done: ";
            cin>>number_of_TV_projects_done;
        }
        void get_number_of_TV_projects_done(){cout<<"Number of TV projects done: "<<number_of_TV_projects_done<<endl;}
        void setTVActor()
        {
            setData();
            set_number_of_TV_projects_done();
        }
        void showTVActor()
        {
            getData();
            get_number_of_TV_projects_done();
        }
};
class MocieActor:public Actor{
    int number_of_movies_done;
    public:
        void set_number_of_movies_done()
        {
            cout<<"Enter number of movies done: ";
            cin>>number_of_movies_done;
        }   
        void get_number_of_movies_done()
        {
            cout<<"Number of Movies done: "<<number_of_movies_done<<endl;
        }
        void setMovieActor()
        {
            setData();
            set_number_of_movies_done();
        }
        void showMovieActor()
        {
            getData();
            get_number_of_movies_done();
        }
};
class AllScreenActor:public TVActor,public MocieActor
{
    public:
        void setActorDAta()
        {
            setTVActor();
            set_number_of_movies_done();
        }
        void showActorData()
        {
            showTVActor();
            get_number_of_movies_done();
        }
};

int main()
{
    AllScreenActor a1;
    a1.setActorDAta();
    a1.showActorData();

    return 0;
}
