#include <iostream>
#include <string>
using namespace std;

struct Course
{
    string code;
    string name;
    Course *next;

    Course(string c, string n)
    {
        code = c;
        name = n;
        next = NULL;
    }
};

struct Student
{
    int id;
    string name;
    Course *courses;
    Student *next;

    Student(int i, string n)
    {
        id = i;
        name = n;
        courses = NULL;
        next = NULL;
    }
};

class StudentList
{
private:
    Student *head;
    int count;

    Student *findStudent(int id)
    {
        Student *temp = head;
        while (temp != NULL)
        {
            if (temp->id == id)
                return temp;
            temp = temp->next;
        }
        return NULL;
    }

public:
    StudentList()
    {
        head = NULL;
        count = 0;
    }

    ~StudentList()
    {
        while (head != NULL)
        {
            Student *s = head;
            head = head->next;
            while (s->courses != NULL)
            {
                Course *c = s->courses;
                s->courses = s->courses->next;
                delete c;
            }
            delete s;
        }
    }

    void addStudent(int id, string name)
    {
        if (findStudent(id) != NULL)
        {
            cout << "Error: ID already exists.\n";
            return;
        }
        Student *newNode = new Student(id, name);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Student *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
        count++;
        cout << "Student added.\n";
    }

    void registerCourse(int id, string code, string cname)
    {
        Student *s = findStudent(id);
        if (s == NULL)
        {
            cout << "Error: Student not found.\n";
            return;
        }
        Course *temp = s->courses;
        while (temp != NULL)
        {
            if (temp->code == code)
            {
                cout << "Error: Already registered in this course.\n";
                return;
            }
            temp = temp->next;
        }
        Course *newNode = new Course(code, cname);
        if (s->courses == NULL)
        {
            s->courses = newNode;
        }
        else
        {
            temp = s->courses;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Course registered.\n";
    }

    void dropCourse(int id, string code)
    {
        Student *s = findStudent(id);
        if (s == NULL)
        {
            cout << "Error: Student not found.\n";
            return;
        }
        Course *curr = s->courses;
        Course *prev = NULL;
        while (curr != NULL && curr->code != code)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr == NULL)
        {
            cout << "Error: Course not found for this student.\n";
            return;
        }
        if (prev == NULL)
            s->courses = curr->next;
        else
            prev->next = curr->next;
        delete curr;
        cout << "Course dropped.\n";
    }

    void searchStudent(int id)
    {
        Student *s = findStudent(id);
        if (s == NULL)
        {
            cout << "Student not found.\n";
            return;
        }
        cout << "Found: ID = " << s->id << ", Name = " << s->name << endl;
        displayCourses(id);
    }

    void removeStudent(int id)
    {
        Student *curr = head;
        Student *prev = NULL;
        while (curr != NULL && curr->id != id)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr == NULL)
        {
            cout << "Error: Student not found.\n";
            return;
        }
        if (prev == NULL)
            head = curr->next;
        else
            prev->next = curr->next;

        while (curr->courses != NULL)
        {
            Course *c = curr->courses;
            curr->courses = curr->courses->next;
            delete c;
        }
        delete curr;
        count--;
        cout << "Student removed.\n";
    }

    void displayStudents()
    {
        if (head == NULL)
        {
            cout << "No students.\n";
            return;
        }
        Student *temp = head;
        while (temp != NULL)
        {
            cout << "ID: " << temp->id << " | Name: " << temp->name << endl;
            temp = temp->next;
        }
    }

    void displayCourses(int id)
    {
        Student *s = findStudent(id);
        if (s == NULL)
        {
            cout << "Student not found.\n";
            return;
        }
        if (s->courses == NULL)
        {
            cout << "No courses registered.\n";
            return;
        }
        cout << "Courses of " << s->name << ":\n";
        Course *temp = s->courses;
        while (temp != NULL)
        {
            cout << "  " << temp->code << " - " << temp->name << endl;
            temp = temp->next;
        }
    }

    int countStudents()
    {
        return count;
    }
};

int readInt(string msg)
{
    int x;
    while (true)
    {
        cout << msg;
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number.\n";
        }
        else
        {
            cin.ignore(1000, '\n');
            return x;
        }
    }
}

int readId()
{
    int x;
    while (true)
    {
        x = readInt("Student ID: ");
        if (x > 0)
            return x;
        cout << "ID must be a positive number.\n";
    }
}

string readText(string msg)
{
    string t;
    while (true)
    {
        cout << msg;
        getline(cin, t);
        if (t.length() > 0)
            return t;
        cout << "This field cannot be empty.\n";
    }
}

int main()
{
    StudentList list;
    int choice, id;
    string name, code, cname;

    do
    {
        cout << "\n===== Course Registration System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Register Course\n";
        cout << "3. Drop Course\n";
        cout << "4. Search Student\n";
        cout << "5. Remove Student\n";
        cout << "6. Display All Students\n";
        cout << "7. Display Student's Courses\n";
        cout << "8. Count Students\n";
        cout << "0. Exit\n";
        choice = readInt("Choice: ");

        if (choice == 1)
        {
            id = readId();
            name = readText("Name: ");
            list.addStudent(id, name);
        }
        else if (choice == 2)
        {
            id = readId();
            code = readText("Course Code: ");
            cname = readText("Course Name: ");
            list.registerCourse(id, code, cname);
        }
        else if (choice == 3)
        {
            id = readId();
            code = readText("Course Code to drop: ");
            list.dropCourse(id, code);
        }
        else if (choice == 4)
        {
            id = readId();
            list.searchStudent(id);
        }
        else if (choice == 5)
        {
            id = readId();
            list.removeStudent(id);
        }
        else if (choice == 6)
        {
            list.displayStudents();
        }
        else if (choice == 7)
        {
            id = readId();
            list.displayCourses(id);
        }
        else if (choice == 8)
        {
            cout << "Total students: " << list.countStudents() << endl;
        }
        else if (choice != 0)
        {
            cout << "Invalid choice. Enter 0 to 8.\n";
        }
    } while (choice != 0);

    cout << "Goodbye!\n";
    return 0;
}