#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Document.h
class Document{
private:
    string name;
    string extension;
    string contents;
public:
    Document(string nameIn, string extensionIn, string contentsIn);
    string GetName();
    void Rename(string newDocumentName);
    string GetExtension();
    string GetContents();
    void Print();

};

//Document.cpp
Document::Document(string nameIn, string extensionIn, string contentsIn){
    name = nameIn;
    extension = extensionIn;
    contents = contentsIn;
}
string Document::GetName(){
    return name;
}
void Document::Rename(string newDocumentName){
    name = newDocumentName;
}
string Document::GetExtension(){
    return extension;
}
string Document::GetContents(){
    return contents;
}
void Document::Print(){
    cout << "Name: " << name << "." << extension << endl;
    cout << "Contents: " << contents << endl;
}

//main.cpp----------
void DisplayMenu(){
    cout << "Choose an option below: "<< endl;
    cout << "1. Add a document to your list"<< endl;
    cout << "2. Rename one of your documents"<< endl;
    cout << "3. Share one of your documents with a friend"<< endl;
    cout << "4. Display all of the documents"<< endl;
    cout << "5. Quit"<< endl << endl;
}
std::string GetUserString(const std::string& prompt = "") {
    std::string userAnswer = "none";

    std::cout << prompt;
    std::getline(std::cin, userAnswer);
    std::cout << std::endl;
    return userAnswer;
}

int GetUserInt(const std::string& prompt = "") {
    int userAnswer = 0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
}

void AddDocumentMenuOption(vector<Document*> &documentLibrary) {
    string name;
    string extension;
    string contents;

    name = GetUserString("Enter the document name: ");
    extension = GetUserString("Enter the document extension: ");
    contents = GetUserString("Enter the document content: ");

    Document *newDocument = new Document(name, extension, contents);
    documentLibrary.push_back(newDocument);
}

void RenameDocumentMenuOption(vector<Document*> &documentLibrary) {
    int userInt;
    string newDocumentName;

    userInt = GetUserInt("Enter the index of your document you want to rename: ");
    newDocumentName = GetUserString("Enter the new name of the document: ");
    documentLibrary.at(userInt)->Rename(newDocumentName);
}

void ShareMenuOption(vector<Document*> &documentLibrary, vector<Document*> &documentFriendLibrary) {
    int userIntShare;

    userIntShare = GetUserInt("Enter the index of your document you want to share: ");
    documentFriendLibrary.push_back(documentLibrary.at(userIntShare));
}

void DisplayMenuOption(vector<Document*> &documentLibrary, vector<Document*> &documentFriendLibrary) {

    cout << "-------------------Your List------------------" << endl;
    for (int i = 0; i < documentLibrary.size(); ++i) {
        cout << "Name: ";
        cout << documentLibrary.at(i)->GetName() << "." << documentLibrary.at(i)->GetExtension();
        cout << endl;
        cout << "Contents: ";
        cout << documentLibrary.at(i)->GetContents();
        cout << endl;
    }

    cout << "--------------Your Friend's List--------------" << endl;
    for (int i = 0; i < documentFriendLibrary.size(); ++i) {
        cout << "Name: ";
        cout << documentFriendLibrary.at(i)->GetName() << "." << documentFriendLibrary.at(i)->GetExtension();
        cout << endl;
        cout << "Contents: ";
        cout << documentFriendLibrary.at(i)->GetContents();
        cout << endl;
    }
    cout << "----------------------------------------------" << endl;
}

void QuitMenuOption(vector<Document*> &documentLibrary, vector<Document*> &documentFriendLibrary) {
    for (int i = 0; i < documentLibrary.size(); ++i) {
        delete documentLibrary.at(i); //freeing memory
    }
    for (int i = 0; i < documentFriendLibrary.size(); ++i) {
        delete documentFriendLibrary.at(i); //freeing memory
    }
}

// Modify the main function to handle each menu option
// Consider creating a new function (above main) per menu option
int main(){
    const int ADD_DOCUMENT_OPTION = 1;
    const int RENAME_DOCUMENT_OPTION = 2;
    const int SHARE_YOUR_DOCUMENT_OPTION = 3;
    const int DISPLAY_ALL_DOCUMENTS_OPTION = 4;
    const int QUIT_OPTION = 5;
    vector<Document*> documentLibrary;
    vector<Document*> documentFriendLibrary;

    int option;
    DisplayMenu();
    option = GetUserInt();

    while(option != QUIT_OPTION){

        if(option == ADD_DOCUMENT_OPTION){
            AddDocumentMenuOption(documentLibrary);
        }
        else if(option == RENAME_DOCUMENT_OPTION){
            RenameDocumentMenuOption(documentLibrary);
        }
        else if(option == SHARE_YOUR_DOCUMENT_OPTION){
            ShareMenuOption(documentLibrary, documentFriendLibrary);
        }
        else if(option == DISPLAY_ALL_DOCUMENTS_OPTION){
            DisplayMenuOption(documentLibrary, documentFriendLibrary);
        }

        option = GetUserInt("Enter option: \n");
    }

    QuitMenuOption(documentLibrary, documentFriendLibrary);

    return 0;
}
