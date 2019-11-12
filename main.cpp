#include"tree.h"
using namespace std;

int main(int argc, char *argv[]) {
  /*

  if (argc < 1 || (argc != 3 && argc != 2)) {
    cout << "Invalid arguments" << endl;
    return 1;
  }
  ArgumentManager am(argc, argv);
  const string in = am.get("input");
  const string command = am.get("command");
  const string out = am.get("output");

  ============================= */
  int testfile = 71;
  string in = "input" + to_string(testfile) + ".txt";
  string command = "command" + to_string(testfile) + ".txt";
  string out = "output" + to_string(testfile) + ".txt";

  ifstream ifs(in);
  ifstream com(command);

  int tmp, degree;
  string comm;
  char trash;


  getline(com, comm);
  stringstream deg_aq(comm);
  do deg_aq >> trash; while (trash != '=');
  deg_aq >> degree;

  btree tree(degree);

  while (ifs >> tmp) tree.insert(tmp);
  cout << "\n";

  while (getline(com, comm)) {
    if (comm == "Inorder Traversal") tree.inorder();
    else {
      stringstream ss(comm);
      string trash;
      int deg;
      ss >> trash; // "Level "
      ss >> deg;
      if (deg > degree) { //level nonexistent
        cout << "error\n";
        continue;
      }
      tree.display(deg);
    }
  }

  return 0;
}
