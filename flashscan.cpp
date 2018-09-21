/*
cd /d drive:\
atrrib -s -h -r *.* /s /d
//dir /o:g /o:s /x
del *.lnk
del *.inf
del *.ini
del *.db
del *.scr
cd 9DEC~1
xcopy *.* .. /e /c /y
del *.* /s /q
rmdir . /s /q
attrib +h 9DEC~1
*/

#include<process.h>
#include<string.h>
#include<iostream>

void FlashScan(const char*);

using namespace std;

void main(int argc,char *argv[])
{
	/*char drive[3];
	cout<<"CAUTION..!\nProceed Only if your Drive is Infected\n";
	cout<<"Enter Flash Drive's directory : ";
	cin>>drive;
	*/
	FlashScan(argv[1]);
}

void FlashScan(const char* drive)
{
  char setpath[50];
  int l=strlen(drive);

  if(l<4)
  {
	//strcpy(setpath,"cd /d ");
	//strcat(setpath,drive);
	system("path C:\\Windows\\System32");
	//system(drive);
	//_chdir("cd /d G:\\");	
	//system("cd /d g:");
	//cout<<"Path "<<setpath<<endl;
	//Set Attrib	
		strcpy(setpath,"attrib -s -h -r ");
		strcat(setpath,drive);
		strcat(setpath,"*.*");
		strcat(setpath," /s /d");
		//cout<<setpath;
		system(setpath);

	//Deleting Shorcuts	
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.lnk");
		//cout<<setpath;
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.inf");
		//cout<<setpath;
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.ini");
		//cout<<setpath;
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.db");
		//cout<<setpath;
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.scr");
		//cout<<setpath;
		system(setpath);
	
	//Copying Data
		//system("cd 9DEC~1");
		strcpy(setpath,"xcopy ");
		strcat(setpath,drive);
		strcat(setpath,"9DEC~1\\*.* ");
		strcat(setpath,drive);
		strcat(setpath," /e /c /y");
		//cout<<setpath;
		system(setpath);
	
	//del fukat(redundant) data
		//system("del *.* /s /q");
		strcpy(setpath,"del ");
		strcat(setpath,drive);
		strcat(setpath,"9DEC~1\\*.* /s /q");
		//cout<<setpath;
		system(setpath);
	
		//system("rmdir . /s /q");
		strcpy(setpath,"rmdir ");
		strcat(setpath,drive);
		strcat(setpath,"9DEC~1\\ /s /q");
		//cout<<setpath;
		system(setpath);
		
	//Giving Finishing
		//system("cd ..");
		//system("attrib +h 9DEC~1");
		strcpy(setpath,"attrib +h ");
		strcat(setpath,drive);
		strcat(setpath,"9DEC~1");
		//cout<<setpath;
		system(setpath);
	
	//Deleting Shorcuts	
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.lnk");
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.inf");
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.ini");
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.db");
		system(setpath);
		strcpy(setpath,"del ");strcat(setpath,drive);strcat(setpath,"*.scr");
		system(setpath);
  }
}