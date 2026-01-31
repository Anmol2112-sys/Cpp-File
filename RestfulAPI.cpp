#include <iostream>
#include <string>
#include <curl/curl.h>

int main() {
    // Initialize the curl library
    CURL *curl;
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if(curl) {
        // Create a new HTTP request
        curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, writeDataCallback);
        // Send the request and get the response
        curl_easy_perform(curl);
        // Get the HTTP status code
        long responseCode;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &responseCode);
        std::cout << "HTTP Status Code: " << responseCode << std::endl;
        // Clean up
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}