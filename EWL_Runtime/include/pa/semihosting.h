

#define Semihosting_Exit 1
#define Semihosting_Read 3
#define Semihosting_Write 4
#define Semihosting_Open 5
#define Semihosting_Close 6
#define Semihosting_Brk 17
#define Semihosting_Access 33
#define Semihosting_Seek 199

#define SEMIHOST_CMDLINE_MAX 256

// Struct for fopen passed in r1 to debug agent
typedef struct {
  char *name;        // pointer to filename, null terminated
  int semihost_mode; // file mode in semihost format
  int name_len;      // filename length excluding null character
} semihost_open_parms;

// Struct for __write_file, __read_file info passed in r1 to debug agent
typedef struct {
  int handle;          // file handle previously opened
  unsigned char *data; // pointer to memory of data to be written
  int count;           // count of number of bytes to be written
} semihost_readwrite_parms;

// Struct for __position_file info passed in r1 to debug agent
typedef struct {
  int handle;        // file handle previously opened
  unsigned long pos; // absolute file position to seek to
} semihost_seek_parms;

// Struct for __temp_file_name info passed in r1 to debug agent
typedef struct {
  char *name;   // storage to host returned tmp name
  int targetid; // unique target id for each tmp name
  int len;      // size of storage, usually L_tmpnam
} semihost_tmpnam_parms;

// Struct for __rename_file info passed in r1 to debug agent
typedef struct {
  char *oldname; // pointer to old file name
  int olen;      // length of old file name
  char *newname; // pointer to new file name
  int nlen;      // length of new file name
} semihost_rename_parms;

// Struct for get cmd line info passed in r1 to debug agent
typedef struct {
  char *cmdline; // storage for cmd line
  int len;       // max length of buffer (256)

} semihost_cmdline_parms;

// Struct for remove info passed in r1 to debug agent
typedef struct {
  char *name; // storage for cmd line
  int len;    // max length of buffer (256)
} semihost_remove_parms;

// Struct for system() info passed in r1 to debug agent
typedef struct {
  char *cmd; // system command to execute
  int len;   // length of command
} semihost_system_parms;

extern void sys_exit(int) _EWL_WEAK;
