#ifndef FILE_MOD_HPP
#define FILE_MOD_HPP

class Customer {
    private:

    public:
        void writeFile (CustomerDetails customer); //create new file
        void readFile (CustomerDetails customer); //reads file
        void appendFile (CustomerDetails customer); //add new content to the existing file
        void saveData (CustomerDetails customer); //modifies the existing file

}

#endif