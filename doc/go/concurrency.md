1. a goroutine is similar to a thread,but is scheduled by Go.
2. multiple goroutines will end up running on the same underlying OS thread.
3. go provides channels to coordinate goroutines.
4. a channel is a communication pipe between goroutines which is used to pass data. only one goroutine can access this data.
5. a channel, has a type which is the type of data we'll be passing through our channel.
