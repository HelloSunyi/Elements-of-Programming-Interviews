// First checkt the connecty: whether there is a cycle by DFS.
// Then, use topological sort: DFS + stack (could be embered in the first setp.
// For the first task in stack, it has no dependent other tasks, so could
// be executed directly, and for each of its child(be depended on it), uppdate its max time consumption.
// Iterate all the tasks in the stack from top to end, handle it as the first one.
