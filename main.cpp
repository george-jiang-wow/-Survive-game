#include<bits/stdc++.h>

using namespace std;
int x;

int main() {
    cout << "Welcome to 'Survive!'!" << endl;
A:
    cout<< "Your name is Chris, and you are in a small plane, going across the Rocky Mountains. Suddenly the engine starts to make strange noises and the plane begins to go down into one of the mountains. Your radio does not work, and nobody knows where you are."<< endl;
    goto T;
B:
    cout<< "You walk for about twenty minutes, wearing the coat and carrying the whisky and the map. The snow is deep and you are very cold."<< endl << "You have two options:" << endl << "1.You go back to the plane and get some different things."<< endl << "2.You want to get warm and you drink the whisky." << endl << "Please choose." << endl;
    cin >> x;
    if (x == 1) {
        goto AC;
    } else if (x == 2) {
        goto AH;
    }
C:
    cout << "You go back to sleep. You don't hear the helicopter again. The next day you walk down the river again. "<< endl;
    goto U;
D:
    cout << "You walk back out of the tunnel and into the rocky valley." << endl;
    goto P;
E:
    cout<< "You eat the fruit. It isn't very good, but you're very hungry so you eat a lot. You take some with you. You can eat it later."<< endl;
    goto J;
F:
    cout<< "You walk for about twenty minutes, wearing the coat and carrying the bananas and the cigarette lighter. The snow is deep and you are very cold. You go into the trees and light a fire."<< endl;
    goto AJ;
G:
    cout<<"It's evening again, but because of the fish you are not hungry. You make a small house under the trees. You wake up early in the morning. There's a lot of noise. You run out and look up. There's a helicopter in the sky. You can see it, but it can't see you because of the trees,and it is going away."<<endl<<"You have four options:"<<endl<<"1.You run after the helicopter."<<endl<<"2.You go back to sleep."<<endl<<"3.You build a big fire."<<endl<<"4.You shout at the helicopter and  wave your arms."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto AE;
    } else if(x==2) {
        goto C;
    } else if(x==3) {
        goto AI;
    } else if(x==4) {
        goto AK;
    }
H:
    cout<<"You are a long way down the valley, and it is nearly night again. You make a fire in the trees and eat the bananas. The next morning you are very hungry. You must find something to eat. In the snow you see the tracks of an animal. Perhaps you can kill and eat this animal."<<endl<<"You have two options:"<<endl<<"1.You walk after the tracks."<<endl<<"2.You are afraid of big animals. Perhaps the animal is dangerous. You walk down the mountain. "<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto AM;
    } else if(x==2) {
        goto Q;
    }
I:
    cout<<"You walk for a few minutes, carrying the bananas, the cigarette lighter and the map. But it is very cold."<<endl<<"You have two options:"<<endl<<"1.You light a fire"<<endl<<"2.You go back to the plane and get the whisky."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto AJ;
    } else if(x==2) {
        goto AH;
    }
J:
    cout<<"It is now afternoon. You begin to feel very ill. Perhaps the fruit is poisonous. You sit down in the snow. You cannot walk. You sit in the snow and get colder and colder"<<endl<<"You lose!"<<endl;
    return 0;

K:
    cout<<"You turn to the right and the plane hits the trees."<<endl<<"You lose!"<<endl;
    return 0;
L:
    cout<<"You walk across the lake. After a few minutes, you go through the ice, and you fall into the icy water."<<endl<<"You lose!"<<endl;
    return 0;
M:
    cout<<"You walk for a few minutes, carrying the whisky, the cigarette lighter and the bananas. You are very cold."<<endl<<"You have two options:"<<endl<<"1.You drink the whisky."<<endl<<"2.You go back to the plane, leave the whisky and take the coat."<<endl<<"Please choose.";
    cin>>x;
    if(x==1) {
        goto AH;
    } else if(x==2) {
        goto F;
    }
N:
    cout<<"There is ice over the river, but there are holes in it. You see that there are fish in the river. Perhaps you can catch a fish and eat it"<<endl<<"You have two choose:"<<endl<<"1.You try and catch a fish through the ice."<<endl<<"2.Fishing in the river is very dangerous. You walk on."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto Z;
    } else if(x==2) {
        goto U;
    }
O:
    cout<<"You turn to the left because you want to land on the snow. The plane goes into the snow and stops. You are safe, but you are at the top of a mountain and it is very cold. And it is evening."<<endl<<"You have two options:"<<endl<<"1.You stay in the plane."<<endl<<"2.You go down the mountain."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto X;
    } else if(x==2) {
        goto AC;
    }
P:
    cout<<"It is very difficult to go past the rocks in the valley. After a few minutes you are very tired."<<endl<<"You have two choose:"<<endl<<"1.You go on down the valley."<<endl<<"2.You go back up the valley and into the tunnel."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto H;
    } else if(x==2) {
        goto AG;
    }
Q:
    cout<<"You walk through the trees down the mountain. You are very hungry. You see some strange fruit on one of the trees."<<endl<<"You have two options:"<<endl<<"1.You eat the fruit."<<endl<<"2.You don't eat the fruit."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto E;
    } else if(x==2) {
        goto W;
    }
R:
    cout<<"You walk carefully onto the lake. After a few hundred metres, the ice begins to move under your feet."<<endl<<"You have two options:"<<endl<<"1.You go on across the lake."<<endl<<"2.You go back and walk around the lake."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto L;
    } else if(x==2) {
        goto AB;
    }
S:
    cout<<"You make another fire. After about two hours you hear the helicopter again. This time it sees the smoke and lands on the snow near you. You are safe You fly to hospital where you can rest and eat."<<endl<<"You win!"<<endl;
    return 0;
T:
    cout<<"You are going down very fast into the mountain but you can turn the plane to the left or the right. To the right there are some trees. To the left there is deep snow."<<endl<<"You have two options:"<<endl<<"1.You turn to the right."<<endl<<"2.You turn to the left."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto K;
    } else if(x==2) {
        goto O;
    }
U:
    cout<<"You walk on down the river. You are now very hungry. You must eat something. There is fruit on the trees, or fish in the river."<<endl<<"You have two options:"<<endl<<"1.You try and catch a fish."<<endl<<"2.You eat some fruit."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto Z;
    } else if(x==2) {
        goto E;
    }
V:
    cout<<"The rope breaks."<<endl<<"You lose!"<<endl;
    return 0;
W:
    cout<<"You continue through the snow. There is nothing to eat. but you can make fires, and there is snow to drink. Suddenly you come to an icy lake."<<endl<<"You have two options:"<<endl<<"1.You walk across the lake. It's quicker, and you must find something to eat."<<endl<<"2.You walk around the lake. You can look for a river."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto R;
    } else if(x==2) {
        goto AB;
    }
X:
    cout<<"You stay in the plane. But it is very cold. Do you really want to die?"<<endl;
    goto AC;
Y:
    cout<<"You stay in the plane for four days. You see and hear nothing. You must go down the mountain."<<endl;
    goto AA;
Z:
    cout<<"You fish for about twenty minutes. Finally you catch one. You catch more. You are now very cold, so you make a fire and cook and eat a fish. It's very good"<<endl;
    goto G;
AA:
    cout<<"You go down the mountain. After a few minutes you see a tunnel in front of you. There is a small valley to your left with a lot of rooks in it"<<endl<<"You have two options:"<<endl<<"1.You go down the valley."<<endl<<"2.You go into the tunnel."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto P;
    } else if(x==2) {
        goto AG;
    }
AB:
    cout<<"You walk around the lake. After about five kilometres you find a river. The water is going out of the lake and down a valley."<<endl<<"You have two options:"<<endl<<"1.You go on around the lake."<<endl<<"2.You walk down the river."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto AL;
    } else if(x==2) {
        goto N;
    }
AC:
    cout<<"You want to go down the mountain. There are some things in the plane. You can take some of them with you. What do you take?"<<endl<<"You have four options:"<<endl<<"1.The coat, the whisky, and the map."<<endl<<"2.The coat, the bananas, and the cigarette lighter."<<endl<<"3.The bananas, the cigarette lighter, and the map."<<endl<<"4.The whisky, the cigarette lighter, and the bananas."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto B;
    } else if(x==2) {
        goto F;
    } else if(x==3) {
        goto I;
    } else if(x==4) {
        goto M;
    }
AD:
    cout<<"You smoke goes up into the sky all day. But you don't see the helicopter. You wait all day. The next morning you wake up early again."<<endl<<"You have two options:"<<endl<<"1.You build another fire"<<endl<<"2.You walk down the river."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto S;
    } else if(x==2) {
        goto U;
    }
AE:
    cout<<"You run after the helicopter but it is going very fast. You have to go up the mountain, and you walk all day in the deep snow, but you don't see the helicopter again."<<endl;
    goto W;
AF:
    cout<<"You stay near the plane. You sit by the fire and watch the sky for two days. Nothing happens."<<endl<<"You have two options:"<<endl<<"1.You stay near the plane."<<endl<<"2.You try and go down the mountain."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto Y;
    } else if(x==2) {
        goto AA;
    }
AG:
    cout<<"You walk into the tunnel. It's very dark. You see a lamp and you light it."<<endl;
    goto AN;
AH:
    cout<<"You want to get warm, so you drink the whisky. But you don't get warm, you just feel tired, very tired"<<endl<<"You lose!"<<endl;
    return 0;
AI:
    cout<<"You build a big fire. There is a lot of smoke. You watch it go up into the sky."<<endl;
    goto AD;
AJ:
    cout<<"You sit all night in the trees in front of your fire. It is cold, but you have a good fire. You can sleep a little. You need to think about what you can do in the morning."<<endl<<"You have two options:"<<endl<<"1.You stay near the plane with a fire."<<endl<<"2.You go down the mountain."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto AF;
    } else if(x==2) {
        goto AA;
    }
AK:
    cout<<"You shout at the helicopter and wave your arms. The helicopter turns and comes back for a minute. Then it starts to go up the mountain."<<endl<<"You have three options:"<<endl<<"1.You run after the helicopter."<<endl<<"2.You go back to sleep."<<endl<<"3.You build a big fire."<<endl;
    cin>>x;
    if(x==1) {
        goto AE;
    } else if(x==2) {
        goto C;
    } else if(x==3) {
        goto AI;
    }
AL:
    cout<<"You walk all round the lake. You are very tired and you don't find anything to eat. You must go down the river."<<endl;
    goto N;
AM:
    cout<<"You walk in the tracks for a long way through the trees They go behind a big tree. You look behind the tree and you see a very big bear. You don't think you can eat this. You walk quietly away."<<endl;
    goto Q;
AN:
    cout<<"You walk down into the mountain for about ten minutes. You come to a big hole in the ground. There is an old rope in the hole."<<endl<<"You have two options:"<<endl<<"1.You go down the rope."<<endl<<"2.You go back up the tunnel."<<endl<<"Please choose."<<endl;
    cin>>x;
    if(x==1) {
        goto V;
    } else if(x==2) {
        goto D;
    }
    return 0;
}
