
#include <sys/wait.h>

#include "../sys_public.h"

void	OutputDebugString( const char *text );

// input
void 	Sys_InitInput( void );
void 	Sys_ShutdownInput( void );

void	IN_DeactivateMouse( void);
void	IN_ActivateMouse( void);

void	IN_Activate (bool active);
void	IN_Frame (void);

void * wglGetProcAddress(const char *name);

void	Sleep( const int time );

#pragma mark glimp

void	Sys_UpdateWindowMouseInputRect( void );

unsigned long Sys_QueryVideoMemory( void );


/* these functions are used by the event system when the "exit key (command) is
   pressed */

void    Sys_DefaultWindowLevel( void );

void    Sys_ReduceWindowLevel( void );
