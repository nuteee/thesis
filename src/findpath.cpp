typedef graph_traits<NodeRefGraph>::vertex_descriptor NRGVertex;
typedef graph_traits<NodeRefGraph>::edge_descriptor NRGEdge;

std::vector<unsigned int> & hasDijkstraPath ( osmium::unsigned_object_id_type from, osmium::unsigned_object_id_type to ) {

    /* ....... */

    dijkstra_shortest_paths(*nodeReferenceGraph, nodeReference2Vertex[from],
                        distance_map(distanceMap)
                        .predecessor_map(predecessorMap));
    /* .......*/

    NRGVertex toVertex = nodeReference2Vertex[to];
    NRGVertex fromVertex = predecessorMap[toVertex];

    while(fromVertex != toVertex) {
        NRGEdge edge = edge(fromVertex, toVertex, *nodeReferenceGraph).first;
        path.push_back ( (unsigned int) vertexNameMap[target ( edge, *nodeReferenceGraph )] );

        toVertex = fromVertex;
        fromVertex = predecessorMap[toVertex];
      }
    path.push_back ( (unsigned int) from );

    std::reverse ( path.begin(), path.end() );

    return path;
}