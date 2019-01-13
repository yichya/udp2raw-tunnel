

//#include <wepoll.h>
#if defined(__MINGW32__)
//#define EV_USE_SELECT 1
//#define EV_SELECT_IS_WINSOCKET 1

# define EV_FD_TO_WIN32_HANDLE(fd) (fd)
# define EV_WIN32_HANDLE_TO_FD(handle) (handle)
# define EV_WIN32_CLOSE_FD(fd) closesocket (fd)
# define FD_SETSIZE 4096

#endif
//#define EV_VERIFY 2

