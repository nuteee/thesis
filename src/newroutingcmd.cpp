try {
    /* ........ */
    
    long unsigned int from = cop->from();
    long unsigned int to = carLexer.get_to();
    if ( inner_route( cop->get_route(), from, to ) ) { 
        length += std::sprintf ( data+length, "<OK %d>", carLexer.get_id() );
    else
        length += std::sprintf ( data+length, "<ERR bad routing vector>" );

    /* ........ */
    boost::asio::write ( client_socket, boost::asio::buffer ( data, length ) );

}
catch ( std::exception& e ) {
    std::cerr << "Error: " << e.what() << std::endl;
}