class Node:
    def __init__(self, value):
        self.value = value
        self.edges = []
        self.visited = False

class Edge:
    def __init__(self, edge_val, node_from, node_to):
        self.value = edge_val
        self.node_from = node_from
        self.node_to = node_to

class Graph:
    def __init__(self, edges = [], nodes = []):
        self.edges = []
        self.nodes = []

    def insert_node(self, new_node_val):
        new_node_val = Node(new_node_val)
        self.nodes.append(new_node_val)

    def insert_new_edge(self, new_edge_val, node_from_val, node_to_val):
        from_found = None
        to_found = None

        for node in self.nodes:
            if node.value == node_from_val:
                from_found = node
            if node.value == node_to_val:
                to_found = node

        if from_found == None:
            from_found = Node(node_from_val)
            self.nodes.append(from_found)

        if to_found == None:
            to_found = Node(node_to_val)
            self.nodes.append(to_found)

        new_edge = Edge(new_edge_val, from_found, to_found)
        from_found.edges.append(new_edge)
        to_found.edges.append(new_edge)
        self.edges.append(new_edge)

    def find_max_node_val(self):
        max_index = -1
        for node in self.nodes:
            if node.value > max_index:
                max_index = node.value

        return max_index

    def get_adjacency_list(self):
        max_node = self.find_max_node_val()
        adjacency_list = [None] * (max_node + 1)
        for edge in self.edges:
            if adjacency_list[edge.node_from.value]:
                adjacency_list[edge.node_from.value].append((edge.node_to.value, edge.value))
            else:
                adjacency_list[edge.node_from.value] = [(edge.node_to.value, edge.value)]

        return adjacency_list

    def get_edge_list(self):
        arr = []
        for edge in self.edges:
            new_edge = (edge.value, edge.node_from.value, edge.node_to.value)
            arr.append(new_edge)

        return arr

    def find_node(self, node_val):
        for node in self.nodes:
            if node.value == node_val:
                node_val = node
        return node_val

    def clear_visited(self):
        for node in self.nodes:
            node.vistied = False

    def dfs(self, start_node):
        # checks back all node.visted back to False
        self.clear_visited()
        # check for start_node value in nodes
        start_node = self.find_node(start_node)
        # using dfs_helper
        return self.dfs_helper(start_node)

    def dfs_helper(self, start_node):
        ret_list = [start_node.value]
        start_node.visited = True

        for neighbour in start_node.edges:
            if not neighbour.node_to.visited:
                ret_list.extend(self.dfs_helper(neighbour.node_to))

        return ret_list

    def get_nodes(self):
        arr = []
        for node in self.nodes:
            arr.append(node.value)
        return arr


graph = Graph()
# graph.insert_node(1)
# graph.insert_node(2)
# graph.insert_node(3)
graph.insert_new_edge(100, 1, 2)
graph.insert_new_edge(101, 1, 7)
graph.insert_new_edge(102, 1, 8)
graph.insert_new_edge(103, 2, 3)
graph.insert_new_edge(104, 2, 6)
graph.insert_new_edge(105, 3, 4)
graph.insert_new_edge(106, 3, 5)
graph.insert_new_edge(107, 8, 9)
graph.insert_new_edge(108, 8, 12)
graph.insert_new_edge(109, 9, 10)
graph.insert_new_edge(110, 9, 11)
print(graph.get_adjacency_list())
print(graph.get_edge_list())
print(graph.get_nodes())
print(graph.dfs(1))
